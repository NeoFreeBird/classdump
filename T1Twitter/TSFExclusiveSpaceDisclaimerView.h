//
#ifndef TSFExclusiveSpaceDisclaimerView_h
#define TSFExclusiveSpaceDisclaimerView_h
@import Foundation;

#include "TSFExclusiveSpaceDisclaimerViewDelegate-Protocol.h"

@class TFNButton;

@interface TSFExclusiveSpaceDisclaimerView : TFNButton { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *iconImageView;
    NSNumber"16@0:8 *disclosureIconImageView;
    NSNumber"16@0:8 *textLabel;
    NSNumber"16@0:8 *stackView;
    NSNumber"16@0:8 *disclaimer;
}

@property (nonatomic, weak) id <TSFExclusiveSpaceDisclaimerViewDelegate> delegate;

/* instance methods */
- (id)initWithConfiguration:(id)configuration;
- (void)buttonTapped;
- (id)initWithStyle:(long long)style sizeClass:(long long)_class;

@end

#endif /* TSFExclusiveSpaceDisclaimerView_h */
