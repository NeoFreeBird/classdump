//
#ifndef _TtC4Grok30GrokQuickLookPreviewController_h
#define _TtC4Grok30GrokQuickLookPreviewController_h
@import Foundation;

#include "QLPreviewControllerDataSource-Protocol.h"

@class QLPreviewController, _$s10Foundation3URLVMn;

@interface Grok.GrokQuickLookPreviewController : QLPreviewController <QLPreviewControllerDataSource> { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.URL fileURL;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (long long)numberOfPreviewItemsInPreviewController:(id)controller;
- (id)previewController:(id)controller previewItemAtIndex:(long long)index;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC4Grok30GrokQuickLookPreviewController_h */
