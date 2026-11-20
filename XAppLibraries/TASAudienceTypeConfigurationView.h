//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TASAudienceTypeConfigurationView_h
#define TASAudienceTypeConfigurationView_h
@import Foundation;

#include "TASAudienceTypeConfigurationViewDelegate-Protocol.h"

@class UIView;

@interface TASAudienceTypeConfigurationView : UIView { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 stackView;
    @40@0:8:16@24@32 iconView;
    @40@0:8:16@24@32 button;
    @40@0:8:16@24@32 chevronView;
}

@property (nonatomic, weak) id <TASAudienceTypeConfigurationViewDelegate> delegate;
@property (nonatomic) long long audienceType;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)didTapButton:(id)button;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* TASAudienceTypeConfigurationView_h */
