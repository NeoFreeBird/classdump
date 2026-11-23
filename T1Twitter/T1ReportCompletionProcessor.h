//
#ifndef T1ReportCompletionProcessor_h
#define T1ReportCompletionProcessor_h
@import Foundation;

#include "T1BlockOrReportActionContext.h"

@class NSObject, TFNTwitterAccount, TNLParameterCollection;

@interface T1ReportCompletionProcessor : NSObject

@property (readonly, nonatomic) T1BlockOrReportActionContext *context;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (retain, nonatomic) TNLParameterCollection *queryParameters;
@property (nonatomic) long long nextAction;

/* instance methods */
- (id)initWithContext:(id)context account:(id)account;
- (long long)nextActionForURL:(id)url;
- (void)performActionIfNeeded;
- (void)_t1_performBlock;
- (void)_t1_performMute;
- (void)_t1_performUnfollow;
- (id)_t1_promotedContent;

@end

#endif /* T1ReportCompletionProcessor_h */
