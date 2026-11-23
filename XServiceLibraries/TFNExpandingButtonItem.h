//
#ifndef TFNExpandingButtonItem_h
#define TFNExpandingButtonItem_h
@import Foundation;

#include "TFNExpandingButton.h"

@class NSArray, NSObject, NSString, UIKeyCommand;

@interface TFNExpandingButtonItem : NSObject

@property (nonatomic) unsigned long long index;
@property (weak, nonatomic) TFNExpandingButton *associatedButton;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *accessibilityIdentifier;
@property (copy, nonatomic) NSString *accessibilityLabel;
@property (copy, nonatomic) NSArray *customBackgroundColors;
@property (copy, nonatomic) id /* block */ tapAction;
@property (copy, nonatomic) id /* block */ longPressAction;
@property (copy, nonatomic) id /* block */ didExpandAction;
@property (readonly, nonatomic) unsigned long long category;
@property (readonly, nonatomic) UIKeyCommand *associatedKeyCommand;
@property (copy, nonatomic) NSString *tutorialTitle;
@property (copy, nonatomic) NSString *tutorialDescription;
@property (copy, nonatomic) NSString *tutorialButtonLabel;
@property (copy, nonatomic) NSString *tutorialAccessibilityAnnouncement;

/* instance methods */
- (id)initWithIconImageName:(id)name category:(unsigned long long)category;
- (id)initWithIconImageName:(id)name category:(unsigned long long)category keyCommand:(id)command;
- (_Bool)performAccessibilityAction;

@end

#endif /* TFNExpandingButtonItem_h */
