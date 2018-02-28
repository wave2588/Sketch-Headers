//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSColorSpace, NSImage, NSMenuItem, NSPopUpButtonCell;

@protocol MSSharedObjectStyling <NSObject>
- (void)applyStyleToMenuItem:(NSMenuItem *)arg1 withColorSpace:(NSColorSpace *)arg2;
- (NSImage *)generatePreviewForManageSheetWithCompletionBlock:(void (^)(NSImage *))arg1;
- (NSImage *)generatePreviewForPopup:(NSPopUpButtonCell *)arg1 completionBlock:(void (^)(NSImage *))arg2;
- (NSImage *)generatePreviewForMenuItem:(NSMenuItem *)arg1 withColorSpace:(NSColorSpace *)arg2 completionBlock:(void (^)(NSImage *))arg3;
@end
