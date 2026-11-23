//
#ifndef T1StatusPhotoVideoDetailsViewDelegate_Protocol_h
#define T1StatusPhotoVideoDetailsViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1StatusPhotoVideoDetailsViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)statusPhotoVideoDetailsView:(id)view didTapAttributionForMediaEntity:(id)entity;
- (void)statusPhotoVideoDetailsView:(id)view didTapAttributionForUser:(id)user;
- (void)statusPhotoVideoDetailsView:(id)view didTapAttributionForUser:(id)user;
- (void)statusPhotoVideoDetailsViewDidTapView:(id)view;
- (void)statusPhotoVideoDetailsViewDidTapView:(id)view;

@end

#endif /* T1StatusPhotoVideoDetailsViewDelegate_Protocol_h */
