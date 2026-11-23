//
#ifndef T1StatusTableRowAdapterLogger_h
#define T1StatusTableRowAdapterLogger_h
@import Foundation;

@class NSObject, TFNTwitterAccount, TFSTwitterScribeContext;

@interface T1StatusTableRowAdapterLogger : NSObject

@property (readonly, nonatomic) TFSTwitterScribeContext *scribeContext;
@property (readonly, nonatomic) TFNTwitterAccount *account;

/* instance methods */
- (id)initWithScribeContext:(id)context account:(id)account;
- (id)init;
- (void)scribeMediaForwardTapForStatusView:(id)view inTableViewController:(id)controller defaultAction:(id)action section:(id)section defaultElement:(id)element;
- (void)scribeDismissTweetForStatusViewModel:(id)model inTableViewController:(id)controller section:(id)section component:(id)component element:(id)element action:(id)action;
- (void)scribeRevenueForwardTapForStatusView:(id)view inTableViewController:(id)controller action:(id)action section:(id)section element:(id)element;
- (void)logPromotedEventIfNeeded:(long long)needed forStatusView:(id)view inTableViewController:(id)controller;
- (void)logPromotedEventIfNeeded:(long long)needed forStatus:(id)status inTableViewController:(id)controller;

@end

#endif /* T1StatusTableRowAdapterLogger_h */
