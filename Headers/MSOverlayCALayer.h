//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSRenderingCALayer.h"

#import "CALayerDelegate.h"

@class NSString;

@interface MSOverlayCALayer : MSRenderingCALayer <CALayerDelegate>
{
    id <MSOverlayRenderingDelegate> _overlayRenderingDelegate;
}

@property(nonatomic) __weak id <MSOverlayRenderingDelegate> overlayRenderingDelegate; // @synthesize overlayRenderingDelegate=_overlayRenderingDelegate;
- (void).cxx_destruct;
- (id)tile;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (id)initWithTiledLayer:(id)arg1 size:(struct CGSize)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
