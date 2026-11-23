//
#ifndef T1ProfileHeaderViewControllerDelegate_Protocol_h
#define T1ProfileHeaderViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1ProfileHeaderViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)profileHeaderViewControllerDidTapBack:(id)back;
- (void)profileHeaderViewControllerDidTapClose:(id)close;
- (void)profileHeaderViewControllerDidTapSearch:(id)search;

@optional

@end

#endif /* T1ProfileHeaderViewControllerDelegate_Protocol_h */
