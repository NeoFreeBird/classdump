//
#ifndef T1StatusViewEventScribeHandler_Protocol_h
#define T1StatusViewEventScribeHandler_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1StatusViewEventScribeHandler <NSObject>

@required

@optional

/* optional instance methods */
- (id)scribePageForObject:(id)object controller:(id)controller indexPath:(id)path;
- (id)scribeSectionForObject:(id)object controller:(id)controller indexPath:(id)path;
- (id)scribeComponentForObject:(id)object controller:(id)controller;
- (id)scribeElementForObject:(id)object controller:(id)controller indexPath:(id)path;
- (id)scribeParametersForObject:(id)object controller:(id)controller indexPath:(id)path;

@end

#endif /* T1StatusViewEventScribeHandler_Protocol_h */
