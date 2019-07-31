//
//  ViewController.swift
//  Football iOS
//
//  Created by Lukas Dylan on 15/05/19.
//  Copyright © 2019 Lukas Dylan. All rights reserved.
//

import UIKit
import FootballNewsSharedCode

class ViewController: UIViewController, UITableViewDelegate, UITableViewDataSource {
    
    @IBOutlet weak var tableView: UITableView!
    
    @IBOutlet weak var loadingView: UIActivityIndicatorView!
    
    var viewModel = LeagueViewModel.init(engine: nil)
    var leagues = [League]()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        observeData()
        viewModel.testLoadLeagueList()
//        DispatchQueue.main.asyncAfter(deadline: .now() + 7) {
////            self.viewModel.testLoadLeagueList()
//            self.observeData()
//        }
    }
    
    private func observeData() {
        viewModel.leagueList.observe(lifecycle: KLifecycle()) { (value) -> KotlinUnit in
            self.loadingView.isHidden = true
            if let leagues = value as? [League] {
                self.leagues = leagues
            }
            self.tableView.reloadData()
            return KotlinUnit()
        }
        
        viewModel.loadingState.observe(lifecycle: KLifecycle()) { (value) -> KotlinUnit in
            if (value as? Bool == true) {
                self.loadingView.startAnimating()
            } else {
                self.loadingView.stopAnimating()
            }
            return KotlinUnit()
        }
    }

    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return leagues.count
    }
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        guard let cell = tableView.dequeueReusableCell(withIdentifier: "LeagueCell") else {
            return UITableViewCell()
        }
        cell.textLabel?.text = leagues[indexPath.row].strLeague
        return cell
    }
    
    func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        let selectedLeague = leagues[indexPath.row]
        print(selectedLeague.strLeague!)
    }
}
