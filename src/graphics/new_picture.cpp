// Jason Brillante "Damdoshi"
// Hanged Bunny Studio 2014-2018
//
// Lapin library

#include		"lapin_private.h"

#define			PATTERN		"%u width, %u height -> %p"

t_bunny_picture		*bunny_new_picture(unsigned int		width,
					   unsigned int		height)
{
  struct bunny_picture	*pic;

  if ((pic = new (std::nothrow) struct bunny_picture) == NULL)
    goto Fail;
  if ((pic->texture = new (std::nothrow) sf::RenderTexture) == NULL)
    goto FailStruct;
  if ((pic->sprite = new (std::nothrow) sf::Sprite) == NULL)
    goto FailSprite;
  if (pic->texture->create(width, height) == false)
    goto FailSprite;

  pic->texture->clear(sf::Color(0, 0, 0, 0));
  pic->texture->display();
  pic->texture->setSmooth(false);
  pic->tex = &pic->texture->getTexture();
  pic->sprite->setTexture(*pic->tex);
  pic->type = GRAPHIC_RAM;
  pic->width = width;
  pic->height = height;

  pic->rect.x = 0;
  pic->rect.y = 0;
  pic->rect.w = width;
  pic->rect.h = height;
  pic->position.x = 0;
  pic->position.y = 0;
  pic->origin.x = 0;
  pic->origin.y = 0;
  pic->scale.x = 1;
  pic->scale.y = 1;
  pic->rotation = 0;
  pic->color_mask.full = WHITE;
  pic->smooth = false;
  pic->mosaic = false;

  pic->res_id = 0;

  scream_log_if(PATTERN, "ressource,graphics", width, height, pic);
  return ((t_bunny_picture*)pic);

 FailSprite:
  delete pic->texture;
 FailStruct:
  delete pic;
 Fail:
  scream_error_if(return (NULL), ENOMEM, PATTERN, "ressource,graphics", width, height, (void*)NULL);
  return (NULL);
}
