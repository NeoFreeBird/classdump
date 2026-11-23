//
#ifndef UIImage_TSAImageLoading_h
#define UIImage_TSAImageLoading_h
@import Foundation;

@interface UIImage (TSAImageLoading)

/* class methods */
+ (id)ptv_twitterIconWithSize:(struct CGSize { double x0; double x1; })size color:(id)color;
+ (id)ptv_notificationsStrokeIconWithSize:(struct CGSize { double x0; double x1; })size color:(id)color;
+ (id)ptv_trashcanStrokeIconWithSize:(struct CGSize { double x0; double x1; })size color:(id)color;
+ (id)ptv_outgoingIconWithSize:(struct CGSize { double x0; double x1; })size color:(id)color;
+ (id)ptv_settingsGearFillIconWithSize:(struct CGSize { double x0; double x1; })size color:(id)color;
+ (id)ptv_starRatingFillIconWithSize:(struct CGSize { double x0; double x1; })size color:(id)color;
+ (id)ptv_notificationsOffIconWithSize:(struct CGSize { double x0; double x1; })size color:(id)color;
+ (id)ptv_chevronDownIconWithSize:(struct CGSize { double x0; double x1; })size color:(id)color;
+ (id)ptv_closeIconWithSize:(struct CGSize { double x0; double x1; })size color:(id)color;
+ (id)ptv_eyeIconWithSize:(struct CGSize { double x0; double x1; })size color:(id)color;
+ (id)ptv_eyeOffIconWithSize:(struct CGSize { double x0; double x1; })size color:(id)color;
+ (id)ptv_informationCircleIconWithSize:(struct CGSize { double x0; double x1; })size color:(id)color;
+ (id)ptv_globeIconWithSize:(struct CGSize { double x0; double x1; })size color:(id)color;
+ (id)ptv_personIconWithSize:(struct CGSize { double x0; double x1; })size color:(id)color;
+ (id)ptv_locationStrokeIconWithSize:(struct CGSize { double x0; double x1; })size color:(id)color;
+ (id)ptv_lockStrokeIconWithSize:(struct CGSize { double x0; double x1; })size color:(id)color;
+ (id)ptv_calendarIconWithSize:(struct CGSize { double x0; double x1; })size color:(id)color;
+ (id)ptv_cameraFlipIconWithSize:(struct CGSize { double x0; double x1; })size color:(id)color;
+ (id)ptv_pencilStrokeIconWithSize:(struct CGSize { double x0; double x1; })size color:(id)color;
+ (id)ptv_skipIconWithSize:(struct CGSize { double x0; double x1; })size color:(id)color;
+ (id)ptv_pauseIconWithSize:(struct CGSize { double x0; double x1; })size color:(id)color;
+ (id)ptv_playIconWithSize:(struct CGSize { double x0; double x1; })size color:(id)color;
+ (id)ptv_smilePeopleIconWithSize:(struct CGSize { double x0; double x1; })size color:(id)color;
+ (id)ptv_smilePeopleCloseIconWithSize:(struct CGSize { double x0; double x1; })size color:(id)color;
+ (id)ptv_microphoneIconWithSize:(struct CGSize { double x0; double x1; })size color:(id)color;
+ (id)ptv_GuestCallInImage;
+ (id)ptv_GuestHangUpImage;
+ (id)ptv_GuestWaitingImage;
+ (id)tui_imageNamed:(id)named;
+ (id)tsa_imageNamed:(id)named;

/* instance methods */
- (id)spacesImageFilledWithGradientColors:(id)colors;
- (id)ptv_imageWithAlpha:(double)alpha;

@end

#endif /* UIImage_TSAImageLoading_h */
