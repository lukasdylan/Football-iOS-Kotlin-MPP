#import <Foundation/Foundation.h>

@class FNSCFootballServiceImpl, FNSCEither, FNSCEitherFailure, FNSCEitherSuccess, FNSCLeague, FNSCLeagueCompanion, FNSCLeague$serializer, FNSCKotlinArray, FNSCBaseViewModel, FNSCViewModel, FNSCKLiveData, FNSCSharedLeagueViewModel, FNSCKLifecycle, FNSCKotlinUnit, FNSCLifecycleAndObserver, FNSCKMediatorLiveData, FNSCKMutableLiveData, FNSCTransformations, FNSCKtor_client_coreHttpClientEngineConfig, FNSCKotlinx_coroutines_coreCoroutineDispatcher, FNSCKotlinx_serialization_runtime_nativeEnumDescriptor, FNSCKotlinx_serialization_runtime_nativeSerialKind, FNSCKotlinNothing, FNSCKotlinx_serialization_runtime_nativeUpdateMode, FNSCKtor_client_coreHttpResponseConfig, FNSCKotlinAbstractCoroutineContextElement, FNSCKotlinx_serialization_runtime_nativeSerialClassDescImpl, FNSCKotlinEnum, FNSCKotlinx_ioCharset, FNSCKotlinx_ioCharsetDecoder, FNSCKotlinx_ioCharsetEncoder;

@protocol FNSCKtor_client_coreHttpClientEngine, FNSCParcelable, FNSCKotlinx_serialization_runtime_nativeKSerializer, FNSCKotlinx_serialization_runtime_nativeGeneratedSerializer, FNSCKotlinx_serialization_runtime_nativeSerializationStrategy, FNSCKotlinx_serialization_runtime_nativeEncoder, FNSCKotlinx_serialization_runtime_nativeSerialDescriptor, FNSCKotlinx_serialization_runtime_nativeDeserializationStrategy, FNSCKotlinx_serialization_runtime_nativeDecoder, FNSCKotlinx_coroutines_coreCoroutineScope, FNSCKotlinCoroutineContext, FNSCKotlinx_ioCloseable, FNSCKotlinIterator, FNSCKotlinx_serialization_runtime_nativeCompositeEncoder, FNSCKotlinx_serialization_runtime_nativeSerialModule, FNSCKotlinAnnotation, FNSCKotlinx_serialization_runtime_nativeCompositeDecoder, FNSCKotlinCoroutineContextElement, FNSCKotlinCoroutineContextKey, FNSCKotlinContinuationInterceptor, FNSCKotlinContinuation, FNSCKotlinx_coroutines_coreRunnable, FNSCKotlinx_serialization_runtime_nativeSerialModuleCollector, FNSCKotlinKClass, FNSCKotlinComparable, FNSCKotlinKDeclarationContainer, FNSCKotlinKAnnotatedElement, FNSCKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN

@interface KotlinBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KotlinBase (KotlinBaseCopying) <NSCopying>
@end;

__attribute__((objc_runtime_name("KotlinMutableSet")))
__attribute__((swift_name("KotlinMutableSet")))
@interface FNSCMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
__attribute__((swift_name("KotlinMutableDictionary")))
@interface FNSCMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((objc_runtime_name("KotlinNumber")))
__attribute__((swift_name("KotlinNumber")))
@interface FNSCNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((objc_runtime_name("KotlinByte")))
__attribute__((swift_name("KotlinByte")))
@interface FNSCByte : FNSCNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((objc_runtime_name("KotlinUByte")))
__attribute__((swift_name("KotlinUByte")))
@interface FNSCUByte : FNSCNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((objc_runtime_name("KotlinShort")))
__attribute__((swift_name("KotlinShort")))
@interface FNSCShort : FNSCNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((objc_runtime_name("KotlinUShort")))
__attribute__((swift_name("KotlinUShort")))
@interface FNSCUShort : FNSCNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((objc_runtime_name("KotlinInt")))
__attribute__((swift_name("KotlinInt")))
@interface FNSCInt : FNSCNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((objc_runtime_name("KotlinUInt")))
__attribute__((swift_name("KotlinUInt")))
@interface FNSCUInt : FNSCNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((objc_runtime_name("KotlinLong")))
__attribute__((swift_name("KotlinLong")))
@interface FNSCLong : FNSCNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((objc_runtime_name("KotlinULong")))
__attribute__((swift_name("KotlinULong")))
@interface FNSCULong : FNSCNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((objc_runtime_name("KotlinFloat")))
__attribute__((swift_name("KotlinFloat")))
@interface FNSCFloat : FNSCNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((objc_runtime_name("KotlinDouble")))
__attribute__((swift_name("KotlinDouble")))
@interface FNSCDouble : FNSCNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((objc_runtime_name("KotlinBoolean")))
__attribute__((swift_name("KotlinBoolean")))
@interface FNSCBoolean : FNSCNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FootballServiceImpl")))
@interface FNSCFootballServiceImpl : KotlinBase
- (instancetype)initWithEngine:(id<FNSCKtor_client_coreHttpClientEngine> _Nullable)engine __attribute__((swift_name("init(engine:)"))) __attribute__((objc_designated_initializer));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@end;

__attribute__((swift_name("Either")))
@interface FNSCEither : KotlinBase
@property (readonly) BOOL isSuccess __attribute__((swift_name("isSuccess")));
@property (readonly) BOOL isFailure __attribute__((swift_name("isFailure")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Either.Failure")))
@interface FNSCEitherFailure : FNSCEither
- (instancetype)initWithError:(id _Nullable)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (FNSCEitherFailure *)doCopyError:(id _Nullable)error __attribute__((swift_name("doCopy(error:)")));
@property (readonly) id _Nullable error __attribute__((swift_name("error")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Either.Success")))
@interface FNSCEitherSuccess : FNSCEither
- (instancetype)initWithValue:(id _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (FNSCEitherSuccess *)doCopyValue:(id _Nullable)value __attribute__((swift_name("doCopy(value:)")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Parcelable")))
@protocol FNSCParcelable
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("League")))
@interface FNSCLeague : KotlinBase <FNSCParcelable>
- (instancetype)initWithIdLeague:(NSString * _Nullable)idLeague strLeague:(NSString * _Nullable)strLeague strSport:(NSString * _Nullable)strSport __attribute__((swift_name("init(idLeague:strLeague:strSport:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (FNSCLeague *)doCopyIdLeague:(NSString * _Nullable)idLeague strLeague:(NSString * _Nullable)strLeague strSport:(NSString * _Nullable)strSport __attribute__((swift_name("doCopy(idLeague:strLeague:strSport:)")));
@property (readonly) NSString * _Nullable idLeague __attribute__((swift_name("idLeague")));
@property (readonly) NSString * _Nullable strLeague __attribute__((swift_name("strLeague")));
@property (readonly) NSString * _Nullable strSport __attribute__((swift_name("strSport")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("League.Companion")))
@interface FNSCLeagueCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (FNSCLeague *)defaultLeague __attribute__((swift_name("defaultLeague()")));
- (id<FNSCKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerializationStrategy")))
@protocol FNSCKotlinx_serialization_runtime_nativeSerializationStrategy
@required
- (void)serializeEncoder:(id<FNSCKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(id _Nullable)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@property (readonly) id<FNSCKotlinx_serialization_runtime_nativeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeDeserializationStrategy")))
@protocol FNSCKotlinx_serialization_runtime_nativeDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<FNSCKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (id _Nullable)patchDecoder:(id<FNSCKotlinx_serialization_runtime_nativeDecoder>)decoder old:(id _Nullable)old __attribute__((swift_name("patch(decoder:old:)")));
@property (readonly) id<FNSCKotlinx_serialization_runtime_nativeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeKSerializer")))
@protocol FNSCKotlinx_serialization_runtime_nativeKSerializer <FNSCKotlinx_serialization_runtime_nativeSerializationStrategy, FNSCKotlinx_serialization_runtime_nativeDeserializationStrategy>
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeGeneratedSerializer")))
@protocol FNSCKotlinx_serialization_runtime_nativeGeneratedSerializer <FNSCKotlinx_serialization_runtime_nativeKSerializer>
@required
- (FNSCKotlinArray *)childSerializers __attribute__((swift_name("childSerializers()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("League.$serializer")))
@interface FNSCLeague$serializer : KotlinBase <FNSCKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (FNSCLeague *)deserializeDecoder:(id<FNSCKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (FNSCLeague *)patchDecoder:(id<FNSCKotlinx_serialization_runtime_nativeDecoder>)decoder old:(FNSCLeague *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<FNSCKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(FNSCLeague *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((swift_name("ViewModel")))
@interface FNSCViewModel : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol FNSCKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<FNSCKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((swift_name("BaseViewModel")))
@interface FNSCBaseViewModel : FNSCViewModel <FNSCKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithEngine:(id<FNSCKtor_client_coreHttpClientEngine> _Nullable)engine __attribute__((swift_name("init(engine:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)onStopViewModel __attribute__((swift_name("onStopViewModel()")));
- (void)setErrorSnackBarEventMessage:(NSString * _Nullable)message __attribute__((swift_name("setErrorSnackBarEvent(message:)")));
- (void)setLoadingStateIsLoading:(BOOL)isLoading __attribute__((swift_name("setLoadingState(isLoading:)")));
@property (readonly) FNSCFootballServiceImpl *footballService __attribute__((swift_name("footballService")));
@property (readonly) FNSCKLiveData *loadingState __attribute__((swift_name("loadingState")));
@property (readonly) FNSCKLiveData *errorSnackBarEvent __attribute__((swift_name("errorSnackBarEvent")));
@end;

__attribute__((swift_name("SharedLeagueViewModel")))
@interface FNSCSharedLeagueViewModel : FNSCBaseViewModel
- (instancetype)initWithEngine:(id<FNSCKtor_client_coreHttpClientEngine> _Nullable)engine __attribute__((swift_name("init(engine:)"))) __attribute__((objc_designated_initializer));
- (void)loadLeagueList __attribute__((swift_name("loadLeagueList()")));
@property (readonly) FNSCKLiveData *leagueList __attribute__((swift_name("leagueList")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KLifecycle")))
@interface FNSCKLifecycle : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)start __attribute__((swift_name("start()")));
- (void)stop __attribute__((swift_name("stop()")));
- (void)addStopObserverBlock:(FNSCKotlinUnit *(^)(void))block __attribute__((swift_name("addStopObserver(block:)")));
@property (readonly) FNSCMutableDictionary<NSString *, id> *tags __attribute__((swift_name("tags")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LifecycleAndObserver")))
@interface FNSCLifecycleAndObserver : KotlinBase
- (instancetype)initWithLifecycle:(FNSCKLifecycle *)lifecycle __attribute__((swift_name("init(lifecycle:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSMutableArray<FNSCKotlinUnit *(^)(id _Nullable)> *observers __attribute__((swift_name("observers")));
@end;

__attribute__((swift_name("KLiveData")))
@interface FNSCKLiveData : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)removeObserver __attribute__((swift_name("removeObserver()")));
- (void)observeForeverBlock:(FNSCKotlinUnit *(^)(id _Nullable))block __attribute__((swift_name("observeForever(block:)")));
- (BOOL)hasObservers __attribute__((swift_name("hasObservers()")));
- (void)observeLifecycle:(FNSCKLifecycle *)lifecycle block:(FNSCKotlinUnit *(^)(id _Nullable))block __attribute__((swift_name("observe(lifecycle:block:)")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("KMutableLiveData")))
@interface FNSCKMutableLiveData : FNSCKLiveData
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KMediatorLiveData")))
@interface FNSCKMediatorLiveData : FNSCKMutableLiveData
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addSourceOther:(FNSCKLiveData *)other block:(FNSCKotlinUnit *(^)(id _Nullable))block __attribute__((swift_name("addSource(other:block:)")));
- (void)removeSourceOther:(FNSCKLiveData *)other __attribute__((swift_name("removeSource(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Transformations")))
@interface FNSCTransformations : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)transformations __attribute__((swift_name("init()")));
- (FNSCKLiveData *)mapSource:(FNSCKLiveData *)source mapFunction:(id _Nullable (^)(id _Nullable))mapFunction __attribute__((swift_name("map(source:mapFunction:)")));
- (FNSCKLiveData *)switchMapSource:(FNSCKLiveData *)source switchMapFunction:(FNSCKLiveData *(^)(id _Nullable))switchMapFunction __attribute__((swift_name("switchMap(source:switchMapFunction:)")));
@end;

@interface FNSCKLiveData (Extensions)
- (FNSCKLiveData *)mapMapFunction:(id _Nullable (^)(id _Nullable))mapFunction __attribute__((swift_name("map(mapFunction:)")));
- (FNSCKLiveData *)switchMapSwitchMapFunction:(FNSCKLiveData *(^)(id _Nullable))switchMapFunction __attribute__((swift_name("switchMap(switchMapFunction:)")));
@end;

__attribute__((swift_name("Kotlinx_ioCloseable")))
@protocol FNSCKotlinx_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol FNSCKtor_client_coreHttpClientEngine <FNSCKotlinx_coroutines_coreCoroutineScope, FNSCKotlinx_ioCloseable>
@required
@property (readonly) FNSCKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) FNSCKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface FNSCKotlinArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size init:(id _Nullable (^)(FNSCInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (id _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<FNSCKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(id _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeEncoder")))
@protocol FNSCKotlinx_serialization_runtime_nativeEncoder
@required
- (id<FNSCKotlinx_serialization_runtime_nativeCompositeEncoder>)beginCollectionDesc:(id<FNSCKotlinx_serialization_runtime_nativeSerialDescriptor>)desc collectionSize:(int32_t)collectionSize typeParams:(FNSCKotlinArray *)typeParams __attribute__((swift_name("beginCollection(desc:collectionSize:typeParams:)")));
- (id<FNSCKotlinx_serialization_runtime_nativeCompositeEncoder>)beginStructureDesc:(id<FNSCKotlinx_serialization_runtime_nativeSerialDescriptor>)desc typeParams:(FNSCKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescription:(FNSCKotlinx_serialization_runtime_nativeEnumDescriptor *)enumDescription ordinal:(int32_t)ordinal __attribute__((swift_name("encodeEnum(enumDescription:ordinal:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<FNSCKotlinx_serialization_runtime_nativeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<FNSCKotlinx_serialization_runtime_nativeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
- (void)encodeUnit __attribute__((swift_name("encodeUnit()")));
@property (readonly) id<FNSCKotlinx_serialization_runtime_nativeSerialModule> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialDescriptor")))
@protocol FNSCKotlinx_serialization_runtime_nativeSerialDescriptor
@required
- (NSArray<id<FNSCKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<FNSCKotlinx_serialization_runtime_nativeSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (NSArray<id<FNSCKotlinAnnotation>> *)getEntityAnnotations __attribute__((swift_name("getEntityAnnotations()")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) FNSCKotlinx_serialization_runtime_nativeSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeDecoder")))
@protocol FNSCKotlinx_serialization_runtime_nativeDecoder
@required
- (id<FNSCKotlinx_serialization_runtime_nativeCompositeDecoder>)beginStructureDesc:(id<FNSCKotlinx_serialization_runtime_nativeSerialDescriptor>)desc typeParams:(FNSCKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescription:(FNSCKotlinx_serialization_runtime_nativeEnumDescriptor *)enumDescription __attribute__((swift_name("decodeEnum(enumDescription:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (FNSCKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<FNSCKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<FNSCKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
- (void)decodeUnit __attribute__((swift_name("decodeUnit()")));
- (id _Nullable)updateNullableSerializableValueDeserializer:(id<FNSCKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableValue(deserializer:old:)")));
- (id _Nullable)updateSerializableValueDeserializer:(id<FNSCKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableValue(deserializer:old:)")));
@property (readonly) id<FNSCKotlinx_serialization_runtime_nativeSerialModule> context __attribute__((swift_name("context")));
@property (readonly) FNSCKotlinx_serialization_runtime_nativeUpdateMode *updateMode __attribute__((swift_name("updateMode")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol FNSCKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<FNSCKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<FNSCKotlinCoroutineContextElement> _Nullable)getKey:(id<FNSCKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<FNSCKotlinCoroutineContext>)minusKeyKey:(id<FNSCKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<FNSCKotlinCoroutineContext>)plusContext:(id<FNSCKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface FNSCKotlinUnit : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface FNSCKtor_client_coreHttpClientEngineConfig : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property FNSCKotlinx_coroutines_coreCoroutineDispatcher * _Nullable dispatcher __attribute__((swift_name("dispatcher")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property (readonly) FNSCKtor_client_coreHttpResponseConfig *response __attribute__((swift_name("response")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol FNSCKotlinCoroutineContextElement <FNSCKotlinCoroutineContext>
@required
@property (readonly) id<FNSCKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface FNSCKotlinAbstractCoroutineContextElement : KotlinBase <FNSCKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<FNSCKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol FNSCKotlinContinuationInterceptor <FNSCKotlinCoroutineContextElement>
@required
- (id<FNSCKotlinContinuation>)interceptContinuationContinuation:(id<FNSCKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<FNSCKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface FNSCKotlinx_coroutines_coreCoroutineDispatcher : FNSCKotlinAbstractCoroutineContextElement <FNSCKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<FNSCKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)dispatchContext:(id<FNSCKotlinCoroutineContext>)context block:(id<FNSCKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<FNSCKotlinCoroutineContext>)context block:(id<FNSCKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (BOOL)isDispatchNeededContext:(id<FNSCKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (FNSCKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(FNSCKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol FNSCKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeCompositeEncoder")))
@protocol FNSCKotlinx_serialization_runtime_nativeCompositeEncoder
@required
- (void)encodeBooleanElementDesc:(id<FNSCKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(desc:index:value:)")));
- (void)encodeByteElementDesc:(id<FNSCKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(desc:index:value:)")));
- (void)encodeCharElementDesc:(id<FNSCKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(desc:index:value:)")));
- (void)encodeDoubleElementDesc:(id<FNSCKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(desc:index:value:)")));
- (void)encodeFloatElementDesc:(id<FNSCKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(desc:index:value:)")));
- (void)encodeIntElementDesc:(id<FNSCKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(desc:index:value:)")));
- (void)encodeLongElementDesc:(id<FNSCKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(desc:index:value:)")));
- (void)encodeNonSerializableElementDesc:(id<FNSCKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(id)value __attribute__((swift_name("encodeNonSerializableElement(desc:index:value:)")));
- (void)encodeNullableSerializableElementDesc:(id<FNSCKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index serializer:(id<FNSCKotlinx_serialization_runtime_nativeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(desc:index:serializer:value:)")));
- (void)encodeSerializableElementDesc:(id<FNSCKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index serializer:(id<FNSCKotlinx_serialization_runtime_nativeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(desc:index:serializer:value:)")));
- (void)encodeShortElementDesc:(id<FNSCKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(desc:index:value:)")));
- (void)encodeStringElementDesc:(id<FNSCKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(desc:index:value:)")));
- (void)encodeUnitElementDesc:(id<FNSCKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("encodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<FNSCKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (BOOL)shouldEncodeElementDefaultDesc:(id<FNSCKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(desc:index:)")));
@property (readonly) id<FNSCKotlinx_serialization_runtime_nativeSerialModule> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialClassDescImpl")))
@interface FNSCKotlinx_serialization_runtime_nativeSerialClassDescImpl : KotlinBase <FNSCKotlinx_serialization_runtime_nativeSerialDescriptor>
- (instancetype)initWithName:(NSString *)name generatedSerializer:(id<FNSCKotlinx_serialization_runtime_nativeGeneratedSerializer> _Nullable)generatedSerializer __attribute__((swift_name("init(name:generatedSerializer:)"))) __attribute__((objc_designated_initializer));
- (void)addElementName:(NSString *)name isOptional:(BOOL)isOptional __attribute__((swift_name("addElement(name:isOptional:)")));
- (void)pushAnnotationA:(id<FNSCKotlinAnnotation>)a __attribute__((swift_name("pushAnnotation(a:)")));
- (void)pushClassAnnotationA:(id<FNSCKotlinAnnotation>)a __attribute__((swift_name("pushClassAnnotation(a:)")));
- (void)pushDescriptorDesc:(id<FNSCKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("pushDescriptor(desc:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtime_nativeEnumDescriptor")))
@interface FNSCKotlinx_serialization_runtime_nativeEnumDescriptor : FNSCKotlinx_serialization_runtime_nativeSerialClassDescImpl
- (instancetype)initWithName:(NSString *)name choices:(FNSCKotlinArray *)choices __attribute__((swift_name("init(name:choices:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name generatedSerializer:(id<FNSCKotlinx_serialization_runtime_nativeGeneratedSerializer> _Nullable)generatedSerializer __attribute__((swift_name("init(name:generatedSerializer:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialModule")))
@protocol FNSCKotlinx_serialization_runtime_nativeSerialModule
@required
- (void)dumpToCollector:(id<FNSCKotlinx_serialization_runtime_nativeSerialModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<FNSCKotlinx_serialization_runtime_nativeKSerializer> _Nullable)getContextualKclass:(id<FNSCKotlinKClass>)kclass __attribute__((swift_name("getContextual(kclass:)")));
- (id<FNSCKotlinx_serialization_runtime_nativeKSerializer> _Nullable)getPolymorphicBaseClass:(id<FNSCKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<FNSCKotlinx_serialization_runtime_nativeKSerializer> _Nullable)getPolymorphicBaseClass:(id<FNSCKotlinKClass>)baseClass serializedClassName:(NSString *)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol FNSCKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialKind")))
@interface FNSCKotlinx_serialization_runtime_nativeSerialKind : KotlinBase
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeCompositeDecoder")))
@protocol FNSCKotlinx_serialization_runtime_nativeCompositeDecoder
@required
- (BOOL)decodeBooleanElementDesc:(id<FNSCKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(desc:index:)")));
- (int8_t)decodeByteElementDesc:(id<FNSCKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeByteElement(desc:index:)")));
- (unichar)decodeCharElementDesc:(id<FNSCKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeCharElement(desc:index:)")));
- (int32_t)decodeCollectionSizeDesc:(id<FNSCKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("decodeCollectionSize(desc:)")));
- (double)decodeDoubleElementDesc:(id<FNSCKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(desc:index:)")));
- (int32_t)decodeElementIndexDesc:(id<FNSCKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("decodeElementIndex(desc:)")));
- (float)decodeFloatElementDesc:(id<FNSCKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeFloatElement(desc:index:)")));
- (int32_t)decodeIntElementDesc:(id<FNSCKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeIntElement(desc:index:)")));
- (int64_t)decodeLongElementDesc:(id<FNSCKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeLongElement(desc:index:)")));
- (id _Nullable)decodeNullableSerializableElementDesc:(id<FNSCKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<FNSCKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableElement(desc:index:deserializer:)")));
- (id _Nullable)decodeSerializableElementDesc:(id<FNSCKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<FNSCKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableElement(desc:index:deserializer:)")));
- (int16_t)decodeShortElementDesc:(id<FNSCKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeShortElement(desc:index:)")));
- (NSString *)decodeStringElementDesc:(id<FNSCKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeStringElement(desc:index:)")));
- (void)decodeUnitElementDesc:(id<FNSCKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<FNSCKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (id _Nullable)updateNullableSerializableElementDesc:(id<FNSCKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<FNSCKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableElement(desc:index:deserializer:old:)")));
- (id _Nullable)updateSerializableElementDesc:(id<FNSCKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<FNSCKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableElement(desc:index:deserializer:old:)")));
@property (readonly) id<FNSCKotlinx_serialization_runtime_nativeSerialModule> context __attribute__((swift_name("context")));
@property (readonly) FNSCKotlinx_serialization_runtime_nativeUpdateMode *updateMode __attribute__((swift_name("updateMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface FNSCKotlinNothing : KotlinBase
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol FNSCKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface FNSCKotlinEnum : KotlinBase <FNSCKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(FNSCKotlinEnum *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtime_nativeUpdateMode")))
@interface FNSCKotlinx_serialization_runtime_nativeUpdateMode : FNSCKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) FNSCKotlinx_serialization_runtime_nativeUpdateMode *banned __attribute__((swift_name("banned")));
@property (class, readonly) FNSCKotlinx_serialization_runtime_nativeUpdateMode *overwrite __attribute__((swift_name("overwrite")));
@property (class, readonly) FNSCKotlinx_serialization_runtime_nativeUpdateMode *update __attribute__((swift_name("update")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(FNSCKotlinx_serialization_runtime_nativeUpdateMode *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol FNSCKotlinCoroutineContextKey
@required
@end;

__attribute__((swift_name("Ktor_client_coreHttpResponseConfig")))
@interface FNSCKtor_client_coreHttpResponseConfig : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property FNSCKotlinx_ioCharset *defaultCharset __attribute__((swift_name("defaultCharset")));
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol FNSCKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<FNSCKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol FNSCKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialModuleCollector")))
@protocol FNSCKotlinx_serialization_runtime_nativeSerialModuleCollector
@required
- (void)contextualKClass:(id<FNSCKotlinKClass>)kClass serializer:(id<FNSCKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<FNSCKotlinKClass>)baseClass actualClass:(id<FNSCKotlinKClass>)actualClass actualSerializer:(id<FNSCKotlinx_serialization_runtime_nativeKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol FNSCKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol FNSCKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol FNSCKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol FNSCKotlinKClass <FNSCKotlinKDeclarationContainer, FNSCKotlinKAnnotatedElement, FNSCKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((swift_name("Kotlinx_ioCharset")))
@interface FNSCKotlinx_ioCharset : KotlinBase
- (instancetype)initWith_name:(NSString *)_name __attribute__((swift_name("init(_name:)"))) __attribute__((objc_designated_initializer));
- (FNSCKotlinx_ioCharsetDecoder *)doNewDecoder __attribute__((swift_name("doNewDecoder()")));
- (FNSCKotlinx_ioCharsetEncoder *)doNewEncoder __attribute__((swift_name("doNewEncoder()")));
@end;

__attribute__((swift_name("Kotlinx_ioCharsetDecoder")))
@interface FNSCKotlinx_ioCharsetDecoder : KotlinBase
- (instancetype)initWith_charset:(FNSCKotlinx_ioCharset *)_charset __attribute__((swift_name("init(_charset:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Kotlinx_ioCharsetEncoder")))
@interface FNSCKotlinx_ioCharsetEncoder : KotlinBase
- (instancetype)initWith_charset:(FNSCKotlinx_ioCharset *)_charset __attribute__((swift_name("init(_charset:)"))) __attribute__((objc_designated_initializer));
@end;

NS_ASSUME_NONNULL_END
