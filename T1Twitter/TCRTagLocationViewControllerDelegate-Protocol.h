//
#ifndef TCRTagLocationViewControllerDelegate_Protocol_h
#define TCRTagLocationViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TCRTagLocationViewControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)composeTagLocationViewControllerDidTapGeoButton:(id)button;
- (void)composeTagLocationViewControllerDidTapSearchButton:(id)button;
- (void)composeTagLocationViewController:(id)controller didTapButtonWithPlace:(id)place index:(unsigned long long)index;

@end

#endif /* TCRTagLocationViewControllerDelegate_Protocol_h */
