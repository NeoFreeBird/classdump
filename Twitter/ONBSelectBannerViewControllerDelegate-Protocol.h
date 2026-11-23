//
#ifndef ONBSelectBannerViewControllerDelegate_Protocol_h
#define ONBSelectBannerViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol ONBSelectBannerViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)selectBannerViewController:(id)controller didTapNextWithPhoto:(id)photo;
- (void)selectBannerViewControllerDidTapSkip:(id)skip;
- (void)selectBannerViewControllerDidTapAddImage:(id)image;

@optional

@end

#endif /* ONBSelectBannerViewControllerDelegate_Protocol_h */
