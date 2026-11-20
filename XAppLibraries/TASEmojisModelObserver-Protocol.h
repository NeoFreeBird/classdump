//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TASEmojisModelObserver_Protocol_h
#define TASEmojisModelObserver_Protocol_h
@import Foundation;

@protocol TASEmojisModelObserver

@required

/* required instance methods */
- (void)emojisModelDidUpdatePreferences;

@optional

@end

#endif /* TASEmojisModelObserver_Protocol_h */
