//
#ifndef PTVGiftStyle_h
#define PTVGiftStyle_h
@import Foundation;

#include "PTVModel.h"

@class NSObject, NSString, NSURL, UIImage;

@interface PTVGiftStyle : NSObject {
    /* instance variables */
    double _screenScale;
    id /* block */ _loadCompletedBlock;
}

@property (retain, nonatomic) UIImage *fillSprite;
@property (retain, nonatomic) UIImage *borderSprite;
@property (retain, nonatomic) UIImage *maskSprite;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) unsigned long long frameCount;
@property (readonly, nonatomic) unsigned long long pausedFrame;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } frameSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } avatarRect;
@property (readonly, nonatomic) NSURL *fillSpriteURL;
@property (readonly, nonatomic) NSURL *borderSpriteURL;
@property (readonly, nonatomic) NSURL *maskSpriteURL;
@property (readonly, nonatomic) NSURL *shortcutIconURL;
@property (readonly, nonatomic) UIImage *shortcutIcon;
@property (readonly, nonatomic) _Bool supportsAvatar;
@property (retain, nonatomic) PTVModel *ptvModel;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary screenScale:(double)scale;
- (void)loadImagesWithCompletion:(id /* block */)completion;
- (void)checkIfAllImagesLoaded;
- (void)imageLoadDidError;
- (void)setImage:(id)image forKVOPath:(id)kvopath;
- (void)loadURL:(id)url forImageKVOPath:(id)kvopath;

@end

#endif /* PTVGiftStyle_h */
