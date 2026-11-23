//
#ifndef _TtC10JetfuelSDK10ZStackView_h
#define _TtC10JetfuelSDK10ZStackView_h
@import Foundation;

@class JetfuelSDK.ViewContext, JetfuelSDK.ZStackComponent ?, JetfuelSDK.ZStackComponent.Alignment, UIView;

@interface JetfuelSDK.ZStackView : UIView { // (Swift)
    /* instance variables */
    JetfuelSDK.ViewContext context;
    JetfuelSDK.ZStackComponent ? comp;
    JetfuelSDK.ZStackComponent.Alignment alignment;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC10JetfuelSDK10ZStackView_h */
