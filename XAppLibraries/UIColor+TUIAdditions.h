//
#ifndef UIColor_TUIAdditions_h
#define UIColor_TUIAdditions_h
@import Foundation;

@interface UIColor (TUIAdditions)

/* class methods */
+ (id)tcr_voiceColorWithColor:(id)color brightnessOffset:(unsigned long long)offset;
+ (id)ocf_uiColorForOCFColor:(long long)ocfcolor;
+ (id)tav_colorWithComponents:(id)components;
+ (id)tui_colorWithRosettaColorValue:(long long)value;

@end

#endif /* UIColor_TUIAdditions_h */
