//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1UserRecommendationViewEventHandler_h
#define T1UserRecommendationViewEventHandler_h
@import Foundation;

@class NSObject;

@interface T1UserRecommendationViewEventHandler : NSObject

/* class methods */
+ (void)handleProfileTapEvent:(id)event status:(id)status scribeContext:(id)context cardEvent:(id)event referringScribeContext:(id)context account:(id)account;
+ (id)handlePreviewingEvent:(id)event status:(id)status scribeContext:(id)context cardEvent:(id)event referringScribeContext:(id)context account:(id)account sourceView:(id)view sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;

@end

#endif /* T1UserRecommendationViewEventHandler_h */
