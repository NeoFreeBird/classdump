//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCComponentViewEventDelegate_Protocol_h
#define TUCComponentViewEventDelegate_Protocol_h
@import Foundation;

@protocol TUCComponentViewEventDelegate

@required

/* required instance methods */
- (id)componentView:(id)view didFireViewEvent:(id)event;
- (id)componentView:(id)view didFireViewEvent:(id)event;
- (id)containerView:(id)view didFireViewEvent:(id)event;
- (id)containerView:(id)view didFireViewEvent:(id)event;

@optional

@end

#endif /* TUCComponentViewEventDelegate_Protocol_h */
