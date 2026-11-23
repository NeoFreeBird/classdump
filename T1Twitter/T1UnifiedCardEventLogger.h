//
#ifndef T1UnifiedCardEventLogger_h
#define T1UnifiedCardEventLogger_h
@import Foundation;

#include "TAFEventLogger-Protocol.h"

@class NSObject, TFNTwitterAccount;

@interface T1UnifiedCardEventLogger : NSObject <TAFEventLogger>

@property (retain, nonatomic) TFNTwitterAccount *account;

/* instance methods */
- (id)initWithAccount:(id)account;
- (void)logClientEventForAction:(id)action page:(id)page section:(id)section component:(id)component element:(id)element parameters:(id)parameters;
- (void)logPromotedEventWithParameters:(id)parameters promotedContent:(id)content scribeContext:(id)context;
- (void)logRawPromotedEventWithEvent:(long long)event withParameters:(id)parameters promotedContent:(id)content scribeContext:(id)context;

@end

#endif /* T1UnifiedCardEventLogger_h */
