//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10JetfuelSDK13ListTableView_h
#define _TtC10JetfuelSDK13ListTableView_h
@import Foundation;

@class UITableView, _$syycSg;

@interface JetfuelSDK.ListTableView : UITableView { // (Swift)
    /* instance variables */
    (() -> ())? onSafeAreaInsetsChange;
}

/* instance methods */
- (void)safeAreaInsetsDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame style:(long long)style;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC10JetfuelSDK13ListTableView_h */
