//
#ifndef T1LiveEventSlateViewControllerDelegate_Protocol_h
#define T1LiveEventSlateViewControllerDelegate_Protocol_h
@import Foundation;

@protocol T1LiveEventSlateViewControllerDelegate

@required

/* required instance methods */
- (void)liveEventSlateViewController:(id)controller didTapAttributionForStatus:(id)status;
- (void)liveEventSlateViewController:(id)controller didTapAttribution:(id)attribution;
- (void)liveEventSlateViewController:(id)controller didTapPhotoInStatus:(id)status previewImage:(id)image mediaInfo:(id)info;
- (void)liveEventSlateViewController:(id)controller didTapPhotoWithImageInfo:(id)info previewImage:(id)image;

@optional

@end

#endif /* T1LiveEventSlateViewControllerDelegate_Protocol_h */
