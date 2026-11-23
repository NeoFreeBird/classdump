//
#ifndef T1TwitterAccountTeamsContributeeTuple_h
#define T1TwitterAccountTeamsContributeeTuple_h
@import Foundation;

@class NSObject, TFNTwitterAccount, TFSTwitterAccountTeamsContributee;

@interface T1TwitterAccountTeamsContributeeTuple : NSObject

@property (readonly, nonatomic) TFSTwitterAccountTeamsContributee *contributee;
@property (readonly, nonatomic) TFNTwitterAccount *contributor;

/* instance methods */
- (id)initWithContributee:(id)contributee contributor:(id)contributor;
- (id)init;

@end

#endif /* T1TwitterAccountTeamsContributeeTuple_h */
