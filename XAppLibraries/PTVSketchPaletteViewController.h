//
#ifndef PTVSketchPaletteViewController_h
#define PTVSketchPaletteViewController_h
@import Foundation;

#include "PTVPaletteViewController-Protocol.h"
#include "PTVSketchInputViewDelegate-Protocol.h"

@class NSString, UIViewController;

@interface PTVSketchPaletteViewController : UIViewController <PTVPaletteViewController>

@property (weak, nonatomic) id <PTVSketchInputViewDelegate> delegate;
@property (readonly) double paletteViewHeight;
@property (readonly) _Bool paletteViewShouldDisableInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sketchPaletteViewControllerWithDelegate:(id)delegate;

/* instance methods */
- (void)loadView;
- (id)sketchInputView;

@end

#endif /* PTVSketchPaletteViewController_h */
