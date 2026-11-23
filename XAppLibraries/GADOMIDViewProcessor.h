//
#ifndef GADOMIDViewProcessor_h
#define GADOMIDViewProcessor_h
@import Foundation;

#include "GADOMIDNodeProcessor-Protocol.h"

@class NSObject, NSString;

@interface GADOMIDViewProcessor : NSObject <GADOMIDNodeProcessor>

@property (readonly) id <GADOMIDNodeProcessor> processorForChildren;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)stateForView:(id)view;
- (id)childrenForView:(id)view;
- (id)orderedChildrenForView:(id)view;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameInWindowSystemForView:(id)view;
- (id)windowForView:(id)view;
- (void)addView:(id)view toDictionary:(id)dictionary;
- (id)buildChildrenFromDictionary:(id)dictionary;

@end

#endif /* GADOMIDViewProcessor_h */
