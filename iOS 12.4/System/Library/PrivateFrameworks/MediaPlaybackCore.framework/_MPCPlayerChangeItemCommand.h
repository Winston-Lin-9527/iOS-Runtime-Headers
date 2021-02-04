/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/_MPCPlayerCommand.h>
#import <libobjc.A.dylib/MPCPlayerChangeItemCommand.h>

@class NSString;

@interface _MPCPlayerChangeItemCommand : _MPCPlayerCommand <MPCPlayerChangeItemCommand> {

	unsigned long long _changeItemSupport;

}

@property (nonatomic,readonly) unsigned long long changeItemSupport;              //@synthesize changeItemSupport=_changeItemSupport - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)nextItem;
-(id)previousItemDeferringToPlaybackQueuePosition;
-(id)initWithResponse:(id)arg1 changeItemSupport:(unsigned long long)arg2 ;
-(id)previousItem;
-(id)previousSection;
-(id)previousChapter;
-(id)nextSection;
-(id)nextChapter;
-(id)changeToSection:(id)arg1 ;
-(id)changeToItem:(id)arg1 ;
-(unsigned long long)changeItemSupport;
@end
