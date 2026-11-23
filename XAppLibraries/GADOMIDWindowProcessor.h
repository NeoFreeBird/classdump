//
#ifndef GADOMIDWindowProcessor_h
#define GADOMIDWindowProcessor_h
@import Foundation;

#include "GADOMIDViewProcessor.h"

@interface GADOMIDWindowProcessor : GADOMIDViewProcessor

@property (readonly) GADOMIDViewProcessor *viewProcessor;

/* instance methods */
- (id)processorForChildren;
- (id)initWithViewProcessor:(id)processor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameInWindowSystemForView:(id)view;
- (id)windowForView:(id)view;

@end

#endif /* GADOMIDWindowProcessor_h */
