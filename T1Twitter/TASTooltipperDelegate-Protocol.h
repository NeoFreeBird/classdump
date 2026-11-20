//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TASTooltipperDelegate_Protocol_h
#define TASTooltipperDelegate_Protocol_h
@import Foundation;

@protocol TASTooltipperDelegate

@required

/* required instance methods */
- (_Bool)tooltipper:(id)tooltipper shouldPresentTutorial:(long long)tutorial context:(id)context;
- (void)tooltipper:(id)tooltipper didPresentTutorial:(long long)tutorial context:(id)context;

@optional

@end

#endif /* TASTooltipperDelegate_Protocol_h */
