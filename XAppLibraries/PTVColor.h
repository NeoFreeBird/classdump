//
#ifndef PTVColor_h
#define PTVColor_h
@import Foundation;

@class NSArray, NSObject;

@interface PTVColor : NSObject {
    /* instance variables */
    NSArray *_chatColorsArray;
    NSArray *_audioScopeColorsArray;
}

@property (readonly, nonatomic) long long numberOfChatColors;

/* class methods */
+ (id)SharedInstance;
+ (id)ImageFromColor:(id)color;
+ (id)colorBundle;
+ (id)ptv_ColorNamed:(id)named;
+ (id)Clear;
+ (id)Dark;
+ (id)TranslucentBlack;
+ (id)TranslucentWhiteText;
+ (id)TranslucentWhiteTextHighlighted;
+ (id)LightText;
+ (id)Blue;
+ (id)DarkBlue;
+ (id)BlueHighlighted;
+ (id)LightBlue;
+ (id)Green;
+ (id)PositiveGreen;
+ (id)AcceptAsGuestGreen;
+ (id)Red;
+ (id)NegativeRed;
+ (id)LightRed;
+ (id)Yellow;
+ (id)YellowWarning;
+ (id)Background;
+ (id)WhiteBoxBorder;
+ (id)White;
+ (id)BroadcastControlsBackground;
+ (id)BroadcastSubtitleBackground;
+ (id)VideoBackgroundColor;
+ (id)BlueReplay;
+ (id)PreBroadcastBlack;
+ (id)GlobalListBackground;
+ (id)OrangeChat;
+ (id)PurpleChat;
+ (id)GreenChat;
+ (id)PeriwinkleChat;
+ (id)RedChat;
+ (id)YellowChat;
+ (id)TealChat;
+ (id)PinkChat;
+ (id)BrownChat;
+ (id)VividTangerineChat;
+ (id)SkyBlueChat;
+ (id)FernChat;
+ (id)CarnationChat;
+ (id)Bronze;
+ (id)Silver;
+ (id)Gold;
+ (id)LightDividerColor;
+ (id)DarkDividerColor;
+ (id)TransparentDivider;
+ (id)BlueyGrey;
+ (id)LightBlueBackground;
+ (id)TwitterBlue;
+ (id)TwitterBlueHighlighted;
+ (id)FacebookBlue;
+ (id)FacebookBlueHighlighted;
+ (id)GoogleGray;
+ (id)GoogleGrayHighlighted;
+ (id)BroadcastStatsGradientStart;
+ (id)BroadcastStatsGradientEnd;
+ (id)CameraGridExactLineColor;
+ (id)ChatCommentBlockedContentBackground;
+ (id)TranslucentWhite_15;
+ (id)TranslucentWhite_50;
+ (id)TranslucentWhite_60;
+ (id)TranslucentWhite_70;
+ (id)TranslucentBlack_15;
+ (id)TranslucentBlack_30;
+ (id)TranslucentBlack_50;
+ (id)TranslucentBlack_60;
+ (id)Gray50;
+ (id)Gray60;
+ (id)Gray75;
+ (id)Gray80;
+ (id)NotificationsPermissionsPeriscopeLabel;
+ (id)NotificationsPermissionsNotificationLabel;
+ (id)LoginViewPhoneButton;
+ (id)LoginViewPhoneButtonHighlighted;
+ (id)SegmentedButtonColor;
+ (id)WhiteCardBorderColor;
+ (id)UserCollectionSocialContextLabelColor;
+ (id)UnreadActivityBackgroundColor;
+ (id)ProfileLimitedBannerLabelColor;
+ (id)ProfileLimitedBannerBackgroundColor;
+ (id)BackgroundShadeColor;

/* instance methods */
- (id)init;
- (id)chatColorAtIndex:(long long)index;
- (id)audioScopeColorAtIndex:(unsigned long long)index;

@end

#endif /* PTVColor_h */
