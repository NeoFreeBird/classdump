//
#ifndef PTVTableViewFullScreen_Protocol_h
#define PTVTableViewFullScreen_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVTableViewFullScreen <NSObject>

@required

/* required instance methods */
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForFullViewScreenInTableView:(id)view;

@optional

@end

#endif /* PTVTableViewFullScreen_Protocol_h */
