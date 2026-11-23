//
#ifndef T1ProfileDisplayBlockingViewerContentProvider_h
#define T1ProfileDisplayBlockingViewerContentProvider_h
@import Foundation;

#include "T1ProfileDisplayContentProvider.h"

@interface T1ProfileDisplayBlockingViewerContentProvider : T1ProfileDisplayContentProvider

/* instance methods */
- (_Bool)canBecomeCurrent;
- (id)scribePage;
- (id)scribeSection;
- (id)generateDefaultMainViewController;

@end

#endif /* T1ProfileDisplayBlockingViewerContentProvider_h */
