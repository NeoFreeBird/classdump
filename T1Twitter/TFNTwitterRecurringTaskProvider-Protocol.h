//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
