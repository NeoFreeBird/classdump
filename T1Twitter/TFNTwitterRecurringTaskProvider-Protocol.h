//
#ifndef TFNTwitterRecurringTaskProvider_Protocol_h
#define TFNTwitterRecurringTaskProvider_Protocol_h
@import Foundation;

@protocol TFNTwitterRecurringTaskProvider

@required

/* required instance methods */
- (id)recurringTaskForActiveAccount:(id)account context:(id)context twitter:(id)twitter;
- (id)recurringTaskForActiveAccount:(id)account context:(id)context twitter:(id)twitter;

@optional

@end

#endif /* TFNTwitterRecurringTaskProvider_Protocol_h */
