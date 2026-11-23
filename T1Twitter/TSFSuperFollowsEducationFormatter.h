//
#ifndef TSFSuperFollowsEducationFormatter_h
#define TSFSuperFollowsEducationFormatter_h
@import Foundation;

@class NSAttributedString, NSObject, NSString, UIColor, UIImage;

@interface TSFSuperFollowsEducationFormatter : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *viewModel;
    NSNumber"16@0:8 *displayType;
    NSNumber"16@0:8 *$__lazy_storage_$_attributedText;
}

@property (nonatomic, readonly) long long educationType;
@property (nonatomic, retain) NSAttributedString *attributedText;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } badgeFrame;
@property (nonatomic, readonly) UIImage *badge;

/* class methods */
+ (_Bool)shouldBeVisibleForViewModel:(id)model displayType:(long long)type;

/* instance methods */
- (id)inlineCalloutConfiguration;
- (id)initWithViewModel:(id)model displayType:(long long)type;
- (id)init;

@end

#endif /* TSFSuperFollowsEducationFormatter_h */
