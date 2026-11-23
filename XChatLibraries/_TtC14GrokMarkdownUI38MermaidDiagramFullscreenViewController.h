//
#ifndef _TtC14GrokMarkdownUI38MermaidDiagramFullscreenViewController_h
#define _TtC14GrokMarkdownUI38MermaidDiagramFullscreenViewController_h
@import Foundation;

#include "UIScrollViewDelegate-Protocol.h"

@class GrokMarkdownCore.MarkdownTheme, GrokMarkdownCore.MermaidDiagram, GrokMarkdownCore.MermaidDiagram.Palette, GrokMarkdownUI.MermaidDiagramCanvasView, UIViewController, _$sSo12UIScrollViewC, _$sSo15UIBarButtonItemCSg;

@interface GrokMarkdownUI.MermaidDiagramFullscreenViewController : UIViewController <UIScrollViewDelegate> { // (Swift)
    /* instance variables */
    GrokMarkdownCore.MermaidDiagram diagram;
    GrokMarkdownCore.MermaidDiagram.Palette palette;
    GrokMarkdownCore.MarkdownTheme theme;
    __C.UIBarButtonItem? $__lazy_storage_$_closeItem;
    __C.UIBarButtonItem? $__lazy_storage_$_shareItem;
    __C.UIScrollView scrollView;
    GrokMarkdownUI.MermaidDiagramCanvasView canvas;
}

/* instance methods */
- (id)viewForZoomingInScrollView:(id)view;
- (void)scrollViewDidZoom:(id)zoom;
- (void)scrollViewDidEndZooming:(id)zooming withView:(id)view atScale:(double)scale;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)handleDoubleTap:(id)tap;
- (void)dismissViewer;
- (void)shareImage;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14GrokMarkdownUI38MermaidDiagramFullscreenViewController_h */
