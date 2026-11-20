//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVStarSelectionViewDelegate_Protocol_h
#define PTVStarSelectionViewDelegate_Protocol_h
@import Foundation;

@protocol PTVStarSelectionViewDelegate

@required

/* required instance methods */
- (void)starSelectionDidChange:(id)change;

@optional

@end

#endif /* PTVStarSelectionViewDelegate_Protocol_h */
