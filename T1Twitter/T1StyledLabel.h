//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1StyledLabel_h
#define T1StyledLabel_h
@import Foundation;

@class NSAttributedString, NSDictionary, UILabel;

@interface T1StyledLabel : UILabel {
    /* instance variables */
    NSAttributedString *_shadowAttributedText;
}

@property (copy, nonatomic) NSDictionary *defaultAttributes;
@property (nonatomic) unsigned long long textTransformation;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setText:(id)text;
- (void)setAttributedText:(id)text;
- (id)attributedText;

@end

#endif /* T1StyledLabel_h */
