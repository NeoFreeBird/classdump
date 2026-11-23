//
#ifndef _TtC14T1TwitterSwiftP33_93E58E6AEB587A0B1C0A1A141EE1ED2342T1PaymentsAccessControlReloadRecurringTask_h
#define _TtC14T1TwitterSwiftP33_93E58E6AEB587A0B1C0A1A141EE1ED2342T1PaymentsAccessControlReloadRecurringTask_h
@import Foundation;

@class TFNTwitterAccount, TFNTwitterGenericActiveAccountRecurringTask, TFSTwitterRecurringTaskEvent, TFSTwitterRecurringTaskService;

@interface T1TwitterSwift.(T1PaymentsAccessControlReloadRecurringTask in _93E58E6AEB587A0B1C0A1A141EE1ED23) : TFNTwitterGenericActiveAccountRecurringTask // (Swift)

/* instance methods */
- (void)triggerFromService:(TFSTwitterRecurringTaskService *)service account:(TFNTwitterAccount *)account event:(TFSTwitterRecurringTaskEvent *)event completion:(id /* block */)completion;
- (id)initWithTwitter:(id)twitter;

@end

#endif /* _TtC14T1TwitterSwiftP33_93E58E6AEB587A0B1C0A1A141EE1ED2342T1PaymentsAccessControlReloadRecurringTask_h */
