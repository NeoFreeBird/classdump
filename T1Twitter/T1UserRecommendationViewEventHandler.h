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
