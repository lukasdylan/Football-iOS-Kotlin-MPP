//
//  LeagueViewModel.swift
//  Football iOS
//
//  Created by Erick Martin on 27/05/19.
//  Copyright © 2019 Erick Martin. All rights reserved.
//

import Foundation
import FootballNewsSharedCode

class LeagueViewModel: SharedLeagueViewModel {
    
    override init(engine: Ktor_client_coreHttpClientEngine?) {
        super.init(engine: engine)
        setLoadingState(isLoading: true)
    }
    
    func testLoadLeagueList() {
        loadLeagueList()
    }
}
