//
#ifndef _TtC10XGifPicker3Gif_h
#define _TtC10XGifPicker3Gif_h
@import Foundation;

@class NSObject, NSString, NSURL, _$s10Foundation3URLVMn, _$sSS, __C.CGSize;

@interface XGifPicker.Gif : NSObject // (Swift)

@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) NSURL *originalURL;
@property (nonatomic, readonly) NSURL *previewURL;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } size;

/* instance methods */
- (id)initWithId:(id)id originalURL:(id)url previewURL:(id)url size:(struct CGSize { double x0; double x1; })size;
- (id)init;

@end

#endif /* _TtC10XGifPicker3Gif_h */
