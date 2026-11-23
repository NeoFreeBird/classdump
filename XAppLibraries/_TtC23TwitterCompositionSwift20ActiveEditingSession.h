//
#ifndef _TtC23TwitterCompositionSwift20ActiveEditingSession_h
#define _TtC23TwitterCompositionSwift20ActiveEditingSession_h
@import Foundation;

@class NSArray, NSObject, NSString, _$sSS, _$sSaySSG, _$ss5Int64VMn;

@interface TwitterCompositionSwift.ActiveEditingSession : NSObject // (Swift)

@property (nonatomic, readonly) NSArray *compositionUniqueIDs;
@property (nonatomic, readonly) long long authorAccountUserID;
@property (nonatomic, readonly) NSString *persistenceAccountID;

/* class methods */
+ (id)fromJSONData:(id)jsondata;

/* instance methods */
- (id)initWithCompositionUniqueIDs:(id)ids authorAccountUserID:(long long)id persistenceAccountID:(id)id;
- (id)toJSONData;
- (id)init;

@end

#endif /* _TtC23TwitterCompositionSwift20ActiveEditingSession_h */
