//
#ifndef TFNButton_T1Health_h
#define TFNButton_T1Health_h
@import Foundation;

@interface TFNButton (T1Health)

/* class methods */
+ (long long)t1_voiceRoomCardContentViewButtonStateFromSpaceModel:(id)model;
+ (id)checkPlusButtonWithImageHeight:(double)height backgroundDiameter:(double)diameter borderWidth:(double)width foregroundColor:(id)color backgroundColor:(id)color invertWhenChecked:(_Bool)checked;
+ (id)sensitiveWarningBadge;

/* instance methods */
- (void)applyCheckPlusStyleWithImageHeight:(double)height backgroundDiameter:(double)diameter borderWidth:(double)width foregroundColor:(id)color backgroundColor:(id)color invertWhenChecked:(_Bool)checked;
- (id)private_imageNamed:(id)named height:(double)height backgroundDiameter:(double)diameter borderWidth:(double)width foregroundColor:(id)color backgroundColor:(id)color;

@end

#endif /* TFNButton_T1Health_h */
