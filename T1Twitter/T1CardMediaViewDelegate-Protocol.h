//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1CardMediaViewDelegate_Protocol_h
#define T1CardMediaViewDelegate_Protocol_h
@import Foundation;

@protocol T1CardMediaViewDelegate

@required

/* required instance methods */
- (void)cardMediaView:(id)view didReceivePlayButtonActionWithEvent:(id)event;

@optional

@end

#endif /* T1CardMediaViewDelegate_Protocol_h */
