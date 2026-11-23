//
#ifndef TFNDataViewItemArgs_h
#define TFNDataViewItemArgs_h
@import Foundation;

#include "TFNDataViewController.h"

@class NSDictionary, NSIndexPath, NSObject;

@interface TFNDataViewItemArgs : NSObject

@property (readonly, nonatomic) id item;
@property (readonly, nonatomic) TFNDataViewController *controller;
@property (readonly, nonatomic) NSDictionary *options;
@property (readonly, nonatomic) NSIndexPath *indexPath;

/* instance methods */
- (id)init;
- (id)initWithItem:(id)item controller:(id)controller options:(id)options indexPath:(id)path;

@end

#endif /* TFNDataViewItemArgs_h */
