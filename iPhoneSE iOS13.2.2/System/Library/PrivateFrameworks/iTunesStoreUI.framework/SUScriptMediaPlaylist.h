/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:20 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptMediaItemCollection.h>

@class MPMediaPlaylist;

@interface SUScriptMediaPlaylist : SUScriptMediaItemCollection

@property (nonatomic,readonly) MPMediaPlaylist * nativePlaylist; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(unsigned long long)nativePlaylistAttributesForScriptPlaylistAttributes:(id)arg1 ;
+(id)scriptPlaylistAttributesForNativePlaylistAttributes:(unsigned long long)arg1 ;
-(id)_className;
-(id)valueForProperty:(id)arg1 ;
-(MPMediaPlaylist *)nativePlaylist;
@end
