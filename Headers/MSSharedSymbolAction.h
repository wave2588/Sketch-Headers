//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSSharedObjectAction.h"

@class MSForeignObjectMenuBuilder;

@interface MSSharedSymbolAction : MSSharedObjectAction
{
    MSForeignObjectMenuBuilder *_menuBuilder;
}

@property(retain, nonatomic) MSForeignObjectMenuBuilder *menuBuilder; // @synthesize menuBuilder=_menuBuilder;
- (void).cxx_destruct;
- (id)sharedObjectName;
- (id)sortedObjectMenuItemsForMenu:(id)arg1;
- (id)initWithDocument:(id)arg1;

@end

