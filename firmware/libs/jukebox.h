/* 
 * File:   jukebox.h
 * Author: NotPike
 */

// NEC Encoding
void encode(uint8_t *out, uint32_t command, int pin);

// NEC Decoding
int decode(const uint8_t *in, uint8_t *out); 

// MSG Concat
void msgConcat(const uint8_t *in, uint8_t *inPos, uint64_t *encode, uint8_t *bitLength);

/*
*                         ╓╗Φ▓▓▄▄▄╓,                          .
*                      ╓Φ▓▓▓▓▓▓▓▓▓▓▓▓▓▓φ▄            ,╓╗╬╫╫╫╫╫╫╫╫╫╫╫╬N╗,
*                     ╣▓▓▓▓▓▓▓▓▓▓▓█▓▓▓▓▓▓▓▄       ,╗╬╫╫╫╫╫╫╫╫╫╫╫╫╫╫╫╫╫╫╫╫╬╗,
*                    ▓▓▓▓▓▓▓█▓▓▓▓▓█▓▓▓▓▓▓▓▓▓⌐    ╗╫╫╫╫╫╫╫╫╫╫╫╫╫╫╫╫╫╫╫╫╫╫╫╫╫╫╬w
*                   ╢▓█▓Ñ░░░░░░░╙╨▀▀▀╨╨╨▀▀▓▓H   ╬╫╫M╙╫Ö"╫╫╫╫╫╫╫╫╫╫╫╫╫╫╫╫╫╫╡"╟╫╬
*                  j▓██▓Ñ░░░░░░░»»»»»»»»`»╫▓╡  ╔╫╫╫⌐ ╫H ╫M"╙╣"╟╫"Å╙╫╙╠"╫M"╬ ╣╫╫╫
*                   ████▓K░░░░░░░░»»»»»»»»╫▓▓  ╟╫╫╫⌐ ,  ╡ ╬H└U H ╬ ╣ ╬ ╟ ╔╫ ╫╫╫╫╬
*                   ║██▓Ñ░░µ▄▄▄╦░µµ╦╦▄▄µ░»╣▓▌  '╫╫╫⌐ ╫H Ñ ╗╗╬╫  ╟╫⌐`╔╫N  ╫╣m╣╫╫╫╫
*                   ╙███░╩╫███▓▓╫╨╫╫▓▓█▓▀H╫▓⌐   ╚╫╫w╓╫¼╓╫╗,╓╢╫H ╫╫R ╬╫╫ ╔╫Ñ╓╟╫╫╫M
*                   '▓▓▌░╦░ññ╨╨░Ü»╙╨╨ÑÑ╨╨»╟▌     ╙╫╫╫╫╫╫╫╫╫╫╫╫╗╬╫╫╗╗╫╫╣╗╫╫╫╫╫╫╫Å
*                    └▓▓░░░»»░µ░░»»»░░»`"»▓`     .╫╫╫╫╫╫╫╫╫╫╫╫╫╫╫╫╫╫╫╫╫╫╫╫╫╫╫╫╜
*                     ╚▓M╦µ╦╬Ñ]╦µ░»»]╠╦µ»╟M     ,╣╫╫╫╫╫╣╫╫╫╫╫╫╫╫╫╫╫╫╫╫╫╫╫╫╫Å^
*                      ]╫Ñ╫╫╬╦░╨╬╬╬░░╦╬╫░`     «╬Å╝╜^`   `"╙╝╬╣╫╫╫╫╫╫╬╝╜^`
*                      j╫╫Ñ╫╨╫▄░"Γ⌡¡Å▀╨░H
*                      ¿╫╫╫Ñ░░╫Ñ╫Ñ░░»░░^
*                  ,▓█▌░û╫╫▓Ñ░╨╨╨╨╨░░░░
*                 ╓▓▓▌░░░╫╫╫▓▓╬╦╦╦╦╦╦Ü║█▓╥
*                ╣▓▓▓▓░░░░╫╫╫╫╫▓╫╫╫╫Ñ░Ö▀██▌N,
*              ▄▓▓▓▓▓▓▓░░░░╫╫╫╫╫╫╫╫╩░░╠⌐╙██▓╫╣▄╦╓,
*            ╓╣▓▓▓▓▓▓▓▓▌ "╨░░░░░░░░░░░╙M `╣█▓▓╫╫▓▓▓▓▓▄╥
*         ╓▓▓██▓█▓▓▓▓▓▓▓▄   `╚░░░░░░»»"   ╙▓▓╫╫╫╫▓▓╫╫▓╫▓┐
*    ,╗Φ▓▓▓▓▓██▓██▓▓▓▓▓▓▓█▄     ````       ║╫╫╫╫╫╫▓▓▓▓▓▓▓r
*╓▓▓▓▓▓▓▓▓▓▓▓███▓█▓██▓▓▓▓▓▓▓µ              ╠▓████▓▓▓▓▓▓▓╫▓φ
*║▓█▓▓▓▓▓▓▓▓▓▓███▓████▓▓▓▓▓▓▓▓▄,          .╣▓███▓███▓▓▓▓▓▓▓▄
*.▓▓███▓▓▓▓▓▓▓▓█▀▀▀█▓▓▓▓▓██▓▓███H         :▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▌
*╣█▓▓▓██▓▓▓▓▓▓▓▓▓╦»»█▓████▓▓▓▓▓▓▌         `▓▓▓▓██▓▓▓▓▓▓▓▓╫▓▓▓▄
*╣▓▓▓▓▓███▓▓▓▓▓▓▓▌░░║▓▓▓███▓▓▓▓▓▓          ╫▓▓▓▓█▓▓▓▓▓▓▓▓▓█▓▓▓╕
*▓█▓███▓▓▓██▓▓▓▓▓M╨╨░█▓▓▓▀▀┴'╙▀▓▓H         ╟▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓
*▓█▓▓▓▓███████▓▓█░╦░░»╙`.,»»µ≡╜▓▓▌         `╣▓▓▓▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▌
*▓██▓▓▓▓█████████░╫╦╦╦░░░```,»,╔▓▓          »╢╣▓▓█▓▓▓▓▓▓▓▓╫█▓▓▓▓▄
*████▓▓▓█████████M╫Ü░░░╦╦µ░░╨░¡»║▓▓,        ;║▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓⌐
*██████▓▓████████░Ñ░░░╦░╨░µ»µµ≡"▓▓▓▓▓▄      »║▓▓▓▓▓▓▓▓▓▓▓▓▓███▓▓▓▓
*█████▓██████████╫╫╦░╦╦╦╦╫╩╩░░»▄███▓▓▓▌     »║▓▓▓▓▓▓▓▓▓▓▓▓▓███▓▓▓▓▄
*██████▓▓████████▓╫╫╫Ñ╫╫Ñ╫╬╦╦▄███████▓▓N `'`»╫▓▓▓▓▓▓▓▓▓▓▓▓▓███▓▓▓▓▓
*████████▓▓▓██████▓╫╫╫▓▓▓▓▓▓████████████m   '»╢╫▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▌
*██████████▓███████▓╫▓██████▓████████████   `»╨▓▓▓▓▓▓▓▓▓▓▓▓▓██▓▓▓▓▓▓▌
*█████████▓███████████████▓███▓██████████▌...»]▓▓╫▓▓▓▓▓▓▓▓▓▓▓█████▓▓▓╕
*/