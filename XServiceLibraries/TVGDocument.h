//
#ifndef TVGDocument_h
#define TVGDocument_h
@import Foundation;

#include "TVGConcreteDocument.h"

@class NSAttributedString, NSObject, NSURL;
@protocol OS_dispatch_queue;

@interface TVGDocument : NSObject {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_serialQueue;
    TVGConcreteDocument *_concreteDocument;
}

@property (readonly, nonatomic) void * document;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } viewBox;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } viewPortSize;
@property (readonly, nonatomic) long long debugRenderLogging;
@property (readonly, nonatomic) NSAttributedString *parseLog;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } documentSize;
@property (readonly, nonatomic) NSURL *url;

/* class methods */
+ (_Bool)debugRendering;
+ (void)setDebugRendering:(_Bool)rendering;
+ (id)documentWithName:(id)name;
+ (id)documentWithURL:(id)url;

/* instance methods */
- (id)initWithContentsOfURL:(id)url;
- (void)purgeDocument;
- (id)reloadDocument;
- (id)concreteDocument;
- (struct CGSize { double x0; double x1; })imageSizeFitToSize:(struct CGSize { double x0; double x1; })size scale:(double)scale;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect inContext:(struct CGContext *)context;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect inContext:(struct CGContext *)context defaultFillColor:(struct CGColor *)color;
- (struct CGImage *)createCGImageFitToSize:(struct CGSize { double x0; double x1; })size scale:(double)scale defaultFillColor:(struct CGColor *)color;
- (id)image;
- (id)imageWithHeight:(double)height scale:(double)scale;
- (id)imageFitToSize:(struct CGSize { double x0; double x1; })size scale:(double)scale;
- (id)imageWithHeight:(double)height scale:(double)scale defaultFillColor:(id)color;
- (id)imageFitToSize:(struct CGSize { double x0; double x1; })size scale:(double)scale defaultFillColor:(id)color;

@end

#endif /* TVGDocument_h */
