//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13QuickComposer35QuickComposerPageAppearanceObserver_h
#define _TtC13QuickComposer35QuickComposerPageAppearanceObserver_h
@import Foundation;

@class UIViewController, _$syycSg;

@interface QuickComposer.QuickComposerPageAppearanceObserver : UIViewController { // (Swift)
    /* instance variables */
    (() -> ())? onWillDisappear;
}

/* instance methods */
- (void)loadView;
- (void)viewWillDisappear:(_Bool)disappear;
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC13QuickComposer35QuickComposerPageAppearanceObserver_h */
