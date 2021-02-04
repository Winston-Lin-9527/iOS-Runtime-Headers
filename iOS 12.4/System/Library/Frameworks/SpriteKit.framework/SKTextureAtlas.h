/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:05 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString, NSArray;

@interface SKTextureAtlas : NSObject <NSSecureCoding> {

	NSDictionary* _textureDict;
	NSString* _atlasName;
	BOOL _isCUIImageAtlas;
	unordered_map<std::__1::basic_string<char>, SKTexture *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, SKTexture *> > >* _textureMap;

}

@property (nonatomic,readonly) NSArray * textureNames; 
+(id)lookupCachedTextureNamed:(id)arg1 ;
+(CGImageRef)createCGImageFromCUINamedImage:(CGImageRef)arg1 withSize:(CGSize)arg2 atRect:(CGRect)arg3 ;
+(id)findTextureNamed:(id)arg1 ;
+(BOOL)canUseObjectForAtlas:(id)arg1 ;
+(void)preloadTextureAtlases:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(id)atlasFromCUIImageAtlas:(id)arg1 withName:(id)arg2 ;
+(id)getSupportedPostfixes;
+(void)preloadTextureAtlasesNamed:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(id)atlasWithDictionary:(id)arg1 ;
+(id)atlasNamed:(id)arg1 ;
+(void)_exportAtlasWithDictionary:(id)arg1 toFile:(id)arg2 ;
+(void)_exportAtlasWithDictionary:(id)arg1 toFile:(id)arg2 forcePOT:(BOOL)arg3 ;
+(BOOL)supportsSecureCoding;
-(void)loadTextures;
-(id)_copyImageData;
-(void)_prePopulateCache;
-(void)parseAtlasPropertyList:(id)arg1 withPath:(id)arg2 ;
-(void)loadTexturesFromCUIImageAtlas:(id)arg1 ;
-(id)findTextureNamedFromAtlas:(id)arg1 ;
-(BOOL)isEqualToTextureAtlas:(id)arg1 ;
-(void)unload;
-(void)preloadWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSArray *)textureNames;
-(id)textureNamed:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)commonInit;
@end
